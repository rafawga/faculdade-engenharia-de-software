using System;
using System.Diagnostics;

class Program
{
    static void Main()
    {
        int[] array = GenerateRandomArray(10000, 0, 1000);

        Stopwatch stopwatch = new Stopwatch();

        int[] insertionSortArray = new int[array.Length];
        array.CopyTo(insertionSortArray, 0);
        stopwatch.Start();
        InsertionSort(insertionSortArray);
        stopwatch.Stop();
        Console.WriteLine($"Insertion Sort: {stopwatch.ElapsedMilliseconds} ms");

        int[] selectionSortArray = new int[array.Length];
        array.CopyTo(selectionSortArray, 0);
        stopwatch.Restart();
        SelectionSort(selectionSortArray);
        stopwatch.Stop();
        Console.WriteLine($"Selection Sort: {stopwatch.ElapsedMilliseconds} ms");

        int[] bubbleSortArray = new int[array.Length];
        array.CopyTo(bubbleSortArray, 0);
        stopwatch.Restart();
        BubbleSort(bubbleSortArray);
        stopwatch.Stop();
        Console.WriteLine($"Bubble Sort: {stopwatch.ElapsedMilliseconds} ms");
    }

    static void InsertionSort(int[] array)
    {
        int n = array.Length;
        for (int i = 1; i < n; i++)
        {
            int key = array[i];
            int j = i - 1;

            while (j >= 0 && array[j] > key)
            {
                array[j + 1] = array[j];
                j--;
            }

            array[j + 1] = key;
        }
    }

    static void SelectionSort(int[] array)
    {
        int n = array.Length;

        for (int i = 0; i < n - 1; i++)
        {
            int minIndex = i;

            for (int j = i + 1; j < n; j++)
            {
                if (array[j] < array[minIndex])
                {
                    minIndex = j;
                }
            }

            if (minIndex != i)
            {
                int temp = array[i];
                array[i] = array[minIndex];
                array[minIndex] = temp;
            }
        }
    }

    static void BubbleSort(int[] array)
    {
        int n = array.Length;
        bool swapped;

        for (int i = 0; i < n - 1; i++)
        {
            swapped = false;

            for (int j = 0; j < n - i - 1; j++)
            {
                if (array[j] > array[j + 1])
                {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                    swapped = true;
                }
            }

            if (!swapped)
            {
                break;
            }
        }
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
