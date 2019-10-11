# Campus-Navigation-using-Shortest-path-Algorithum-Between-Two-Points #
##Abstract##
Dijkstra Algorithm is one of the most famous algorithms in computer science. There might be several possible routes to reach a destination point. If someone doesn’t travel through optimal path, it will consume more time and energy. This project aims to determine locations of the node that reflect all the nodes in the list, build the route by connecting nodes and evaluate the optimal path by using Dijkstra algorithm. Dijkstra’s Algorithm is also known as a single source shortest path algorithm which is used to find the shortest distance/path from one node to another node in a graph. This algorithm can be used only for positive distances from one location to another.

##Introduction##
In our daily life, people commonly face many problems in finding which path leads. People usually explore every possible solution in finding their way within the campus, but not every solution can produce the optimal path. Shortest path problem is a problem in finding the fastest route or path from a directed graph. The “Campus Navigation” is used for navigating the user from one place to another within the campus. All navigation system takes user location as a starting point and gives the best optimal path to be followed. Every direction in a graph (map) have a cost to be calculated. This shortest path problem is a way to find a new route or path in a graph with a minimum sum of weight travelled through the direction. This shortest path problem is solved by using Dijkstra’s algorithm of finding the best edge path between vertices in a graph. There are several variations of algorithm that can be used to determine the node that was pursued based on the direction in given graph.
 Variations of the shortest path can be distinguished from single-source objective, pair path and generalization. A pair of shortest path is finding the shortest path for two points of nodes. All pair of shortest path is a technique to find the shortest path among all directed nodes. Single-source shortest path is finding the shortest form travelled, starting from a certain node to all other nodes in the graph. 
Single-objective shortest path problem is to find the shortest path from any node on the graph are directed to a single destination node. Intermediate shortest path is finding the shortest path between two nodes selected through other nodes. Generalization is significantly more efficient than the simple approach to run one-pair of shortest path algorithm on all pairs of vertices that are relevant.

##Problem Statement##
There exist many advanced navigation systems but most of them are unable to provide routes precisely as well as information of building within a region such as campus, shopping mall, hospital and etc.
Nowadays, as people are getting more and more connected to technology, they lost their human touch. Also, people feel more convenient to search for the problem themselves rather than asking someone for help.  
An informative, reliable and precise guidance system is very important in this technological era. It should be able to navigate the user no matter the user is under the indoor or outdoor environment. The guidance system must be user-friendly and able to process data efficiently.
Since the size of any college/university campus can vary from 30 acres to anywhere around 200 acres, students spend majority of their time in travelling between different buildings. New students feel inconvenient to search their way inside the campus.
Therefore, a navigation system is required to find the optimal path within the campus and for the aforementioned problem.

##Methodology##
Dijkstra’s algorithm is for minimum spanning tree. In Dijkstra’s we generate a SPT (shortest path tree) with given source as root. We maintain two sets, one set contains vertices included in shortest path tree, and other set includes vertices not yet included in shortest path tree. At every step of the algorithm, we find a vertex which is in the other set (set of not yet included) and has a minimum distance from the source.
The Dijkstra’s algorithm maintains two sets of vertices which are:
L: Labeled vertices (shortest path is known)
C: Candidate vertices (shortest path not yet known)
One vertex is moved from C to L in each iteration

The steps to be followed for completing the proposed project are as follows:
    1 Identification of key locations in campus infrastructure- Key Structural points in the campus are to be identified, which work as the node points for the Dijkstra’s Algorithm
    2 Distance Estimation -Estimated distance is calculated which works as the weight between two adjustment nodes, hence a weighted directed graph is generated.
    3 Proposing the shortest Path to the User- Using the Dijkstra’s Algorithm the program will suggest the shortest optimal path.
