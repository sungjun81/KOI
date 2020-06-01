#include <stdio.h>
#include <stack>
#include <vector>

using namespace std;
int arr[100000];
int main() {
    int n, i, j = 0;
    stack <int> s;
    vector <char> v;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 1; i <= n; i++)
    {
        s.push(i);
        v.push_back('+');

        while(!s.empty() && s.top() == arr[j])
        {
            s.pop();
            v.push_back('-');
            j++;
        }
    }

    if (!s.empty())
        printf("NO\n");
    else
    {
        for (i = 0; i < v.size(); i++)
            printf("%c\n", v[i]);
    }

    return 0;
}
/*
8
4
3
6
8
7
5
2
1

5
1
2
5
3
4
*/
