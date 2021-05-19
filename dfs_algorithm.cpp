#include <iostream> 
#include <list> 
using namespace std; 
// DFS algoritmasý ile gezilecek grafýn oluþturulmasý
class DFSGraph 
{ 
int V;    // köþe sayýsý için bir integer deðer tanýmladýk
list<int> *adjList;    // listeyi integer pointer olarak tanýmladýk

void DFS_util(int v, bool visited[]); 
public: 
    
DFSGraph(int V)
    {
 this->V = V; 
 adjList = new list<int>[V]; 
    }
    // grafiðe kenar ekleme
void addEdge(int v, int w){
adjList[v].push_back(w); 
    }
     
void DFS();    // dfs fonksiyonu 
}; 
void DFSGraph::DFS_util(int v, bool visited[]) 
{ 
    // düðüm olan v de gezinme 
visited[v] = true; 
cout << v << " "; 
   
    // üzerinden geçilen düðümü iþaretleme 
list<int>::iterator i; 
for(i = adjList[v].begin(); i != adjList[v].end(); ++i) 
if(!visited[*i]) 
DFS_util(*i, visited); 
} 
   
// oluþturulan grafýn içinde dfs fonksiyonu ile gezinme
void DFSGraph::DFS() 
{ 
    
bool *visited = new bool[V]; 
for (int i = 0; i < V; i++) 
visited[i] = false; 
   
    // 
for (int i = 0; i < V; i++) 
if (visited[i] == false) 
DFS_util(i, visited); 
} 
   
int main() 
{ 
    // grafýn oluþturulmasý
DFSGraph gdfs(20); //2. sorudaki grafý kullandým


	gdfs.addEdge(1,2);   	// 1 in komþu olduðu elemanlar
	gdfs.addEdge(1,3);    
	gdfs.addEdge(1,4);	
	
	gdfs.addEdge(2,1);   	// 2 nin komþu olduðu olduðu elemanlar
	gdfs.addEdge(2,4);    
	gdfs.addEdge(2,6);   
	
	gdfs.addEdge(3,1);		// 3 ün komþu olduðu elemanlar
	gdfs.addEdge(3,4);     
	
	gdfs.addEdge(4,1);      // 4 ün komþu olduðu elemanlar
	gdfs.addEdge(4,2);       
	gdfs.addEdge(4,3); 		 
	gdfs.addEdge(4,4);       
	gdfs.addEdge(4,5);
	
	gdfs.addEdge(5,6);		// 5 in komþu olduðu elemanlar
	gdfs.addEdge(5,4);
	
	gdfs.addEdge(6,2);  	// 6 nýn komþu olduðu elemanlar
	gdfs.addEdge(6,4);
	gdfs.addEdge(6,5);
	
	gdfs.addEdge(7,10);		// 7 nin komþu olduðu eleman
	
	gdfs.addEdge(8,9);		// 8 in komþu olduðu eleman
	
	gdfs.addEdge(9,8);		// 9 un komþu olduðu elemanlar
	gdfs.addEdge(9,10);
	
	gdfs.addEdge(10,7);		// 10 un komþu olduðu elemanlar
	gdfs.addEdge(10,9);
	
	gdfs.addEdge(11,12);	// 11 in komþu olduðu eleman
	
	gdfs.addEdge(12,13);	// 12 nin komþu olduðu elemanlar
	gdfs.addEdge(12,14);
	
	gdfs.addEdge(13,12);	// 13 ün komþu olduðu elemanlar
	gdfs.addEdge(13,14);
	
	gdfs.addEdge(14,12);	// 14 ün komþu olduðu elemanlar
	gdfs.addEdge(14,13);
	
	gdfs.addEdge(15,16);	// 15 in komþu olduðu elemanlar
	gdfs.addEdge(15,17);
	
	gdfs.addEdge(16,15);	// 16 nýn komþu olduðu elemanlar
	gdfs.addEdge(16,17);
	
	gdfs.addEdge(17,15);	// 17 nin komþu olduðu elemanlar
	gdfs.addEdge(17,16);
	
	gdfs.addEdge(18,19);	// 18 in komþu olduðu eleman
	
	gdfs.addEdge(19,18);	// 19 un komþu olduðu eleman
 
cout << "Graf icin DFS algoritmasi :"<<endl; 
gdfs.DFS(); 
   
return 0; 
}
