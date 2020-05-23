#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define maxSize 700
int cap[maxSize][maxSize];
int path[maxSize];
bool visited [maxSize];
int pathLenght,n;

int getPath(int startNode,int targetNode,int ourLength,int maxCap)
{
    path[ourLength]=startNode;
    if(startNode==targetNode)
    {
        pathLenght=ourLength+1;
        return maxCap;
    }
    visited[startNode]=true;
    int res=0;
    for(int i=0; i<n; i++)
    {
        if(visited[i] || cap[startNode][i]<=0)
            continue;
        res=getPath(i,targetNode,ourLength+1,min(maxCap,cap[startNode][i]));

        if(res>0)
            break;

    }
    return res;

}
int maxFlow (int start, int endd)
{
    int totalFlow=0;

    while(true)
    {
        memset(visited,0,sizeof(visited));
        int newFlow =getPath(start,endd,0,INT_MAX);
        if(!newFlow)
            break;

        for(int i=1; i<pathLenght; i++)
        {
            int m=path[i-1],n=path[i];
            cap[m][n]-=newFlow;
            cap[n][m]+=newFlow;
        }
        totalFlow+=newFlow;

    }
    return totalFlow;
}
int main()
{


    return 0;
}
