/*
BY SWATI TRIPATHI

DFS [DEPTH FIRST SEARCH] IMPLEMENTATION USING RECURSION

[IN THIS WE HAVE USED STL VECTOR ARRAY ALSO]

HERE WE HAVE THREE ASSUMPTIONS:
1) OUR GRAPH IS UNDIRECTED WHICH MEANS WE CAN GO FROM VERTEX U to VERTEX V  and vice n verca.
2) VERTICES ARE NAMED SEQUENTIALLY FROM 0,1,2... TILL n WHERE n STANDS FOR NUMBER OF NODES/VERTICES IN GRAPH
   WE CANNOT NAME VERTICES IN ANY OTHER WAY LIKE A,B ,etc.
3) STARTING VERTEX IS 0


*/

#include <bits/stdc++.h>
using namespace std;

//ARRAY TO KEEP CHECK OF ALL VERTICES (OR SAY NODES) THAT ARE VISITED
//INITIALLY ALL VALUES ARE INITIALIZED AS 0 SINCE IT IS A GLOBAL VARIABLE
int visited[100];

//adj IS AN ARRAY OF ARRAY THAT KEEP TRACKS OF ALL VERTICES THAT ARE CONNECTED TO A VERTEX
//FOR EXAMPLE ADJ[0] STORES ALL VERTICES THAT ARE CONNECTED TO VERTEX 0
vector<int> adj [100];

//RECURSIVE PROGRAM TO FIND DFS
// vertex IS THE VERTEX CURRENTLY VISITED AND neighbor ARE THE VERTICES CONNECTED WITH CURRENT VERTEX
void dfs(int vertex)
{
    //vertex is marked as visited by assigning it value of 1 in visited array
    //NOTE: HERE INDEX OF VISITED ARRAY IS THE VERTEX NAME FOR E.G. INDEX 0 MEANS VERTEX 0
    visited[vertex] = 1;

    //PRINTING VISITED VERTEX
    cout<<vertex<<" ";

    //VISITNG ALL THE NEIGHBOR OF VISITED VERTEX
    for( int neighbor: adj[vertex])
    {

        //IF A VERTEX IS NOT VISITED/EXPLORED THEN ITS VALUE IN VISITED TABLE IS 0
        //IF VISITED[NEIGHBOR] == 0 WE WILL HAVE TO EXPLORE IT'S NEIGHBOR FIRST
        if(visited[neighbor] == 0){

            //HERE WE RECURSIVELY CALL DFS() AGAIN TO FIRST VISIT VERTEX'S NEIGHBOR
            dfs(neighbor);
        }
    }

}

//MAIN FUNCTION
int main()
{

    int i,j,edges, no_of_vertices ,vertex1,vertex2;

    cout<<"DFS IMPLEMENTATION FOR UNDIRECTED GRAPH THROUGH RECURSION"<<endl<<endl;

    cout<<"Enter the number of edges in the graph "<<endl;
    cin>>edges;

    cout<<"Enter the number of vertices in the graph"<<endl;
    cin>>no_of_vertices;

    cout<<endl<<"Enter the pair of vertex (say u and v) connected to each other (u <-> v)"<<endl<<endl;
    cout<<"u v"<<endl;
    //THIS LOOP TAKES ALL THE PAIRS OF VERTICES THAT ARE CONNECTED VIA AN EDGE
    for(i=0; i<edges; i++)
    {
        cin>>vertex1>>vertex2;
        adj[vertex1].push_back(vertex2);
        adj[vertex2].push_back(vertex1);

    }


    cout<<"This is the Adjacency list : "<<endl<<endl;
    cout<<"Vertex : All its neighbors connected to it "<<endl;

    for(i=0 ; i<no_of_vertices; i++)
    {
      cout<<i<<" : ";

      sort(adj[i].begin(),adj[i].end());

      for(j=0; j<adj[i].size(); j++)
        cout<<adj[i][j]<<" ";

      cout<<endl;

    }

    cout<<endl<<"IN DFS THE ORDER OF VISITING THIS GRAPH WILL BE AS :  \n";

    //ASSUMING 0 IS THE STARTING VERTEX we have hence passed 0
    //CALLING FUNCTION DFS() TO DO DEPTH FIRST SEARCH
    dfs(0);

    return 0;

}

/*

SAMPLE OUTPUT OF THIS PROGRAM IS

Enter the number of vertices in the graph
7

Enter the pair of vertex (say u and v) connected to each other (u <-> v)

u v
0 1
0 4
0 6
1 2
2 4
4 5
5 6
3 2
This is the Adjacency list :

Vertex : All its neighbors connected to it
0 : 1 4 6
1 : 0 2
2 : 1 3 4
3 : 2
4 : 0 2 5
5 : 4 6
6 : 0 5

IN DFS THE ORDER OF VISITING THIS GRAPH WILL BE AS :
0 1 2 3 4 5 6


*/
