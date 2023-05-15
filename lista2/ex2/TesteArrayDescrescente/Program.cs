using System;
using System.Diagnostics;

class Program
{
    static void Main()
    {
        int[] array = GenerateRandomArray(10000, 0, 1000);

        Stopwatch stopwatch = new Stopwatch();

        int[] quickSortArray = new int[array.Length];
        array.CopyTo(quickSortArray, 0);
        stopwatch.Start();
        QuickSort(quickSortArray, 0, quickSortArray.Length - 1);
        stopwatch.Stop();
        Console.WriteLine($"Quick Sort: {stopwatch.ElapsedMilliseconds} ms");

        int[] mergeSortArray = new int[array.Length];
        array.CopyTo(mergeSortArray, 0);
        stopwatch.Restart();
        MergeSort(mergeSortArray, 0, mergeSortArray.Length - 1);
        stopwatch.Stop();
        Console.WriteLine($"Merge Sort: {stopwatch.ElapsedMilliseconds} ms");
    }

    static void QuickSort(int[] array, int low, int high)
    {
        if (low < high)
        {
            int partitionIndex = Partition(array, low, high);

            QuickSort(array, low, partitionIndex - 1);
            QuickSort(array, partitionIndex + 1, high);
        }
    }

    static int Partition(int[] array, int low, int high)
    {
        int pivot = array[high];
        int i = low - 1;

        for (int j = low; j < high; j++)
        {
            if (array[j] > pivot)
            {
                i++;
                Swap(array, i, j);
            }
        }

        Swap(array, i + 1, high);
        return i + 1;
    }

    static void MergeSort(int[] array, int left, int right)
    {
        if (left < right)
        {
            int mid = (left + right) / 2;

            MergeSort(array, left, mid);
            MergeSort(array, mid + 1, right);

            Merge(array, left, mid, right);
        }
    }

    static void Merge(int[] array, int left, int mid, int right)
    {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        int[] leftArray = new int[n1];
        int[] rightArray = new int[n2];

        Array.Copy(array, left, leftArray, 0, n1);
        Array.Copy(array, mid + 1, rightArray, 0, n2);

        int i = 0, j = 0, k = left;

        while (i < n1 && j < n2)
        {
            if (leftArray[i] >= rightArray[j])
            {
                array[k] = leftArray[i];
                i++;
            }
            else
            {
                array[k] = rightArray[j];
                j++;
            }
            k++;
        }

        while (i < n1)
        {
            array[k] = leftArray[i];
            i++;
            k++;
        }

        while (j < n2)
        {
            array[k] = rightArray[j];
            j++;
            k++;
        }
    }

    static void Swap(int[] array, int i, int j)
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

    static int[] GenerateRandomArray(int size, int min, int max)
{
    int[] array = new int[size];
    Random random = new Random();

    for (int i = 0; i < size; i++)
    {
        array[i] = random.Next(min, max + 1);
    }

    return array;
}
}
