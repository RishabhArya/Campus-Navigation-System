
// A C++ program for Dijkstra's single source shortest path algorithm. 
// The program is for adjacency matrix representation of the graph 
#include <limits.h> 
#include <stdio.h> 
  
// Number of vertices in the graph 
#define V 28
  
// A utility function to find the vertex with minimum distance value, from 
// the set of vertices not yet included in shortest path tree 
int minDistance(int dist[], bool sptSet[]) 
{ 
    // Initialize min value 
    int min = INT_MAX, min_index; 
  
    for (int v = 0; v < V; v++) 
        if (sptSet[v] == false && dist[v] <= min) 
            min = dist[v], min_index = v; 
  
    return min_index; 
} 
  
// A utility function to print the constructed distance array 
int printSolution(int dist[]) 
{ 
    printf("Vertex \t\t Distance from Source\n"); 
    for (int i = 0; i < V; i++) 
        printf("%d \t\t %d\n", i, dist[i]); 
} 
  
// Function that implements Dijkstra's single source shortest path algorithm 
// for a graph represented using adjacency matrix representation 
void dijkstra(int graph[V][V], int src) 
{ 
    int dist[V]; // The output array.  dist[i] will hold the shortest 
    // distance from src to i 
  
    bool sptSet[V]; // sptSet[i] will be true if vertex i is included in shortest 
    // path tree or shortest distance from src to i is finalized 
  
    // Initialize all distances as INFINITE and stpSet[] as false 
    for (int i = 0; i < V; i++) 
        dist[i] = INT_MAX, sptSet[i] = false; 
  
    // Distance of source vertex from itself is always 0 
    dist[src] = 0; 
  
    // Find shortest path for all vertices 
    for (int count = 0; count < V - 1; count++) { 
        // Pick the minimum distance vertex from the set of vertices not 
        // yet processed. u is always equal to src in the first iteration. 
        int u = minDistance(dist, sptSet); 
  
        // Mark the picked vertex as processed 
        sptSet[u] = true; 
  
        // Update dist value of the adjacent vertices of the picked vertex. 
        for (int v = 0; v < V; v++) 
  
            // Update dist[v] only if is not in sptSet, there is an edge from 
            // u to v, and total weight of path from src to  v through u is 
            // smaller than current value of dist[v] 
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX 
                && dist[u] + graph[u][v] < dist[v]) 
                dist[v] = dist[u] + graph[u][v]; 
    } 
  
    // print the constructed distance array 
    printSolution(dist); 
} 
  
// driver program to test above function 
int main() 
{ 
    /* Let us create the example graph discussed above */
    int src;
    int graph[V][V] = { 
			 {00,25,00,00,00,00,00,00,50,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00},
			 {25,00,30,05,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00},
			 {00,30,00,10,10,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,10,00},
			 {05,00,00,00,05,10,05,00,00,20,15,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00},
             {00,10,00,05,00,05,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,10},
			 {00,00,05,10,00,00,05,05,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,05},
			 {00,00,00,05,00,05,00,05,00,00,00,00,00,00,00,00,40,00,00,00,00,00,00,00,00,00,00,00},
			 {00,00,00,00,00,05,05,00,00,00,23,00,00,00,00,00,00,20,00,00,00,00,00,00,00,00,00,00},
			 {05,00,00,00,05,10,05,00,00,20,15,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00},
			 {50,00,00,20,00,00,00,00,20,00,30,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00},
			 {00,00,00,15,00,00,00,00,15,30,00,10,70,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00},        		
			 {00,00,00,00,00,00,00,00,00,00,10,00,00,35,00,00,00,00,00,00,00,00,00,00,00,00,00,00},
			 {00,00,00,50,00,00,00,00,50,00,70,35,00,15,20,00,00,00,00,00,00,00,00,00,00,00,00,00},
			 {00,00,00,00,00,00,00,00,00,00,00,00,15,00,05,02,00,00,00,00,00,00,00,00,00,00,00,00},
			 {00,00,00,00,00,00,40,00,00,00,00,00,20,05,00,00,02,00,00,00,00,00,00,00,00,00,00,00},
			 {00,00,00,00,00,00,00,00,00,00,00,00,00,02,00,00,15,80,00,00,00,00,00,00,00,00,00,00},
			 {00,00,00,00,00,00,00,00,00,00,00,00,00,00,02,15,00,20,00,00,00,00,00,00,00,00,00,00},
			 {00,00,00,00,00,00,00,20,00,00,00,00,00,00,00,80,20,00,20,00,00,100,00,23,00,00,00,00},
			 {00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,20,00,70,00,00,00,00,00,00,00,00},
			 {00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,70,00,00,00,00,00,00,00,00,00},
			 {00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,15,00,00,00,00,00,00},
			 {00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,15,00,25,00,00,00,00,00},
			 {00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,25,00,00,00,00,00,00},
			 {00,00,00,00,00,00,00,10,00,00,00,00,00,00,00,00,23,00,00,00,00,00,00,00,05,00,00,00},
			 {00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,05,00,05,00,00},
			 {00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,05,00,00,00},
			 {00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00},
			 {00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00},
			};
    dijkstra(graph, 0); 
    return 0; 
} 
