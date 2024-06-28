#include<stdio.h>
// taking the node 5
#define myNode 5

// Taking example graph

// The graph has a Eulerian path.
 int mygraph[myNode][myNode] = {
   {0, 1, 1, 1, 1},
   {1, 0, 1, 0, 0},
   {1, 1, 0, 0, 0},
   {1, 0, 0, 0, 1},
   {1, 0, 0, 1, 0}
};

// Non Eulerian Graph
void mytraverse(int u, int myvisted[]) {
    
    myvisted[u] = 1;
    
   for(int v = 0; v<myNode; v++) {
      if(mygraph[u][v]) {
         if(!myvisted[v])
            mytraverse(v, myvisted);
      }
   }
}

int isConnect() {
   int myvis[myNode];
   // for all vertex u as start point, check whether all nodes are visible or not
   for(int u; u < myNode; u++) {
      for(int i = 0; i<myNode; i++)
         myvis[i] = 0;    //initialize as no node is visited

      mytraverse(u, myvis);

      for(int i = 0; i<myNode; i++) {
        //if there is a node, not visited by traversal, graph is not connected
        if(!myvis[i])
            return 0;
      }
   }
   return 1;
}

int isEulerian() {
    
  if(isConnect() == 0)    //when graph is not connected
      return 0;
   int degree[myNode];
   int oddDegree = 0;

   for(int i = 0; i<myNode; i++) {
      for(int j = 0; j<myNode; j++) {
         if(mygraph[i][j])
            //increase degree, when connected edge found
            degree[i]++;    
      }
      //when degree of vertices are odd
      if(degree[i] % 2 != 0)
        // count odd degree vertices
        oddDegree++;
   }
    //when vertices with odd degree greater than 2
    if(oddDegree > 2)
        return 0;
    // when oddDegree is 0, it is Euler circuit, and when 2, it is Euler path
   return (oddDegree)?1:2;    
}

void main() {
   int check;
   check = isEulerian();
   switch(check) {
      case 0:
                printf("\nThe graph is not an Eulerian graph.");
                break;
      case 1: 
                printf("\nThe graph has an Eulerian path.");
                break;
      case 2:
                printf("The graph has a Eulerian circuit.");
                break;
   }

}