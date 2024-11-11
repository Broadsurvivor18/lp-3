#include <bits/stdc++.h>
using namespace std;

struct Item 
{
    int value;
    int weight;
};

class Solution 
{
public:
    static bool comp(Item a, Item b) 
    {
        double r1 = (double) a.value / (double) a.weight;
        double r2 = (double) b.value / (double) b.weight;
        return r1 > r2;
    }

    double fractionalKnapsack(int W, Item arr[], int n) 
    {
        sort(arr, arr + n, comp);
        int curWeight = 0;
        double finalvalue = 0.0;

        for (int i = 0; i < n; i++) 
        {
            if (curWeight + arr[i].weight <= W) 
            {   
                curWeight += arr[i].weight;
                finalvalue += arr[i].value;
            } 
            else 
            {
                int remain = W - curWeight;
                finalvalue += (arr[i].value / (double) arr[i].weight) * (double) remain;
                break;
            }
        }

        return finalvalue;
    }
};

int main() 
{
    int n, weight;
    cout << "Enter the number of items: ";
    cin >> n;

    Item arr[n];
    cout << "\nEnter the weight and value for each item:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "Item " << i + 1 << ": ";
        cin >> arr[i].value >> arr[i].weight;
    }

    cout << "\nEnter the capacity of the knapsack: ";
    cin >> weight;

    Solution obj;
    double ans = obj.fractionalKnapsack(weight, arr, n);
    cout << "\nThe maximum value is " << setprecision(2) << fixed << ans << endl;

    return 0;
}
