#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    long long arrsize, opnum, qurnum;
    cin >> arrsize >> opnum >> qurnum;
    vector<ll> base(100005, 0), rep(100005, 0), pre(100005, 0);
    vector<pair<ll, ll>> ranges(opnum + 1);
    vector<ll> vals(opnum + 1, 0);
    for (int i = 1; i <= arrsize; i++)
    {
        cin >> base[i];
    }
    for (int i = 1; i <= opnum; i++)
    {
        ll start, end, val;
        cin >> start >> end>> val;
        ranges[i] = make_pair(start, end);
        vals[i] = val;
    }
    for (int i = 1; i <= qurnum; i++)
    {
        ll start, end;
        cin >> start >> end;
        rep[start]++;
        rep[end+1]--;
    }
    for (int i = 1; i <= opnum; i++)
    {

        rep[i] += rep[i-1];
    }
    for (int i = 1; i <= opnum; i++)
    {
        vals[i] *= rep[i];
    }
    for (int i = 1; i <= opnum; i++)
    {
        pre[ranges[i].first] += vals[i];
        pre[ranges[i].second + 1] -= vals[i];
    }
    for (int i = 1; i <= arrsize; i++)
    {
        pre[i] += pre[i-1];
    }
    for (int i = 1; i <= arrsize; i++)
    {
        cout << pre[i] + base[i] << " ";
    }
    
}