
long subarraySum(vector<int> arr)
{
    int n = arr.size();
    long int result = 0;
    for (int i = 0; i < n; i++)
    {
        result += (arr[i] * (i + 1) * (n - 1));
    }
    return result;
}

// 2nd->
long SubArraySum(vector<int> arr)
{
    int n = arr.size();
    long int result = 0, temp = 0;
    for (int i = 0; i < n; i++)
    {

        temp = 0;
        for (int j = i; j < arr_count; j++)
        {

            temp += arr[j];
            result += temp;
        }
    }
    return result;
}