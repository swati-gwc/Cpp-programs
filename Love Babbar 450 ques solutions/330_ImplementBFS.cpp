/*
BY SWATI TRIPATHI
BFS [BREADTH FIRST SEARCH] IMPLEMENTATION
THIS METHOD IS RECURSIVE AND USES QUEUE DATA STRUCTURE

[IN THIS WE HAVE USED STL VECTOR ARRAY AND QUEUE ALSO]

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
vector<int> adj[100];

queue<int> Q;

//RECURSIVE PROGRAM TO FIND BFS
// vertex IS THE VERTEX CURRENTLY VISITED AND neighborNodes ARE THE VERTICES CONNECTED WITH CURRENT VERTEX / node
void bfs()
{
    if(Q.empty()) return;

    //DELETING FRONT ELEMENT OF QUEUE
    int node = Q.front();
    Q.pop();

    //IF NODE IS NOT VISITED YET
    if(visited[node] == 0){

        //VISITING VERTEX
        cout<<node<<" ";

        //NODE IS MARKED AS VISITED AS IT IS GIVEN VALUE 1 IN VISITED ARRAY
        visited[node] = 1;

        //PUSHING ALL THE NEIGHBORS OF NODE INTO QUEUE
        for(int neighborNodes: adj[node])
        {
            //if NEIGHBOR OF NODES ARE NOT VISITED THEN PUSH IT IN QUEUE
            if(visited[neighborNodes] == 0)
            {
                Q.push(neighborNodes);
            }
        }


    }
    bfs();



}

int main()
{
    int i,j,edges, no_of_vertices ,vertex1,vertex2;

    cout<<"BFS IMPLEMENTATION FOR UNDIRECTED GRAPH USING QUEUE VIA RECURSION"<<endl<<endl;

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


    cout<<"\nThis is the Adjacency list : "<<endl<<endl;
    cout<<"Vertex : All its neighbors connected to it "<<endl;

    for(i=0 ; i<no_of_vertices; i++)
    {
      cout<<i<<" : ";

      sort(adj[i].begin(),adj[i].end());

      for(j=0; j<adj[i].size(); j++)
        cout<<adj[i][j]<<" ";

      cout<<endl;

    }

    cout<<endl<<"IN BFS THE ORDER OF VISITING THIS GRAPH WILL BE AS :  \n";

    Q.push(0);

    //ASSUMING 0 IS THE STARTING VERTEX we have hence passed 0
    //CALLING FUNCTION BFS() TO DO BREADTH FIRST SEARCH
    bfs();


    return 0;

}

/*

SAMPLE OUTPUT OF THIS PROGRAM IS

BFS IMPLEMENTATION FOR UNDIRECTED GRAPH USING QUEUE VIA RECURSION

Enter the number of edges in the graph
10
Enter the number of vertices in the graph
7

Enter the pair of vertex (say u and v) connected to each other (u <-> v)

u v
0 1
0 2
1 3
2 3
2 4
3 4
3 5
4 5
4 6
5 6

This is the Adjacency list :

Vertex : All its neighbors connected to it
0 : 1 2
1 : 0 3
2 : 0 3 4
3 : 1 2 4 5
4 : 2 3 5 6
5 : 3 4 6
6 : 4 5

IN BFS THE ORDER OF VISITING THIS GRAPH WILL BE AS :
0 1 2 3 4 5 6

*/
