#include <iostream> 
#include <list> 
using namespace std; 
// DFS algoritmas� ile gezilecek graf�n olu�turulmas�
class DFSGraph 
{ 
int V;    // k��e say�s� i�in bir integer de�er tan�mlad�k
list<int> *adjList;    // listeyi integer pointer olarak tan�mlad�k

void DFS_util(int v, bool visited[]); 
public: 
    
DFSGraph(int V)
    {
 this->V = V; 
 adjList = new list<int>[V]; 
    }
    // grafi�e kenar ekleme
void addEdge(int v, int w){
adjList[v].push_back(w); 
    }
     
void DFS();    // dfs fonksiyonu 
}; 
void DFSGraph::DFS_util(int v, bool visited[]) 
{ 
    // d���m olan v de gezinme 
visited[v] = true; 
cout << v << " "; 
   
    // �zerinden ge�ilen d���m� i�aretleme 
list<int>::iterator i; 
for(i = adjList[v].begin(); i != adjList[v].end(); ++i) 
if(!visited[*i]) 
DFS_util(*i, visited); 
} 
   
// olu�turulan graf�n i�inde dfs fonksiyonu ile gezinme
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
    // graf�n olu�turulmas�
DFSGraph gdfs(20); //2. sorudaki graf� kulland�m


	gdfs.addEdge(1,2);   	// 1 in kom�u oldu�u elemanlar
	gdfs.addEdge(1,3);    
	gdfs.addEdge(1,4);	
	
	gdfs.addEdge(2,1);   	// 2 nin kom�u oldu�u oldu�u elemanlar
	gdfs.addEdge(2,4);    
	gdfs.addEdge(2,6);   
	
	gdfs.addEdge(3,1);		// 3 �n kom�u oldu�u elemanlar
	gdfs.addEdge(3,4);     
	
	gdfs.addEdge(4,1);      // 4 �n kom�u oldu�u elemanlar
	gdfs.addEdge(4,2);       
	gdfs.addEdge(4,3); 		 
	gdfs.addEdge(4,4);       
	gdfs.addEdge(4,5);
	
	gdfs.addEdge(5,6);		// 5 in kom�u oldu�u elemanlar
	gdfs.addEdge(5,4);
	
	gdfs.addEdge(6,2);  	// 6 n�n kom�u oldu�u elemanlar
	gdfs.addEdge(6,4);
	gdfs.addEdge(6,5);
	
	gdfs.addEdge(7,10);		// 7 nin kom�u oldu�u eleman
	
	gdfs.addEdge(8,9);		// 8 in kom�u oldu�u eleman
	
	gdfs.addEdge(9,8);		// 9 un kom�u oldu�u elemanlar
	gdfs.addEdge(9,10);
	
	gdfs.addEdge(10,7);		// 10 un kom�u oldu�u elemanlar
	gdfs.addEdge(10,9);
	
	gdfs.addEdge(11,12);	// 11 in kom�u oldu�u eleman
	
	gdfs.addEdge(12,13);	// 12 nin kom�u oldu�u elemanlar
	gdfs.addEdge(12,14);
	
	gdfs.addEdge(13,12);	// 13 �n kom�u oldu�u elemanlar
	gdfs.addEdge(13,14);
	
	gdfs.addEdge(14,12);	// 14 �n kom�u oldu�u elemanlar
	gdfs.addEdge(14,13);
	
	gdfs.addEdge(15,16);	// 15 in kom�u oldu�u elemanlar
	gdfs.addEdge(15,17);
	
	gdfs.addEdge(16,15);	// 16 n�n kom�u oldu�u elemanlar
	gdfs.addEdge(16,17);
	
	gdfs.addEdge(17,15);	// 17 nin kom�u oldu�u elemanlar
	gdfs.addEdge(17,16);
	
	gdfs.addEdge(18,19);	// 18 in kom�u oldu�u eleman
	
	gdfs.addEdge(19,18);	// 19 un kom�u oldu�u eleman
 
cout << "Graf icin DFS algoritmasi :"<<endl; 
gdfs.DFS(); 
   
return 0; 
}
