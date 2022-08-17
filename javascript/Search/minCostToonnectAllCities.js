
// Javascript code to find out minimum cost
// path to connect all the cities

// Function to find out minimum valued node
// among the nodes which are not yet included
// in MST
function minnode(n, keyval,
				mstset)
{
	let mini = Number.MAX_VALUE;
	let mini_index = 0;
	
	// Loop through all the values of the nodes
	// which are not yet included in MST and find
	// the minimum valued one.
	for(let i = 0; i < n; i++)
	{
		if (mstset[i] == false &&
			keyval[i] < mini)
		{
			mini = keyval[i];
			mini_index = i;
		}
	}
	return mini_index;
}

// Function to find out the MST and
// the cost of the MST.
function findcost(n, city)
{
	
	// Array to store the parent node of a
	// particular node.
	let parent = Array(n).fill(0);
	
	// Array to store key value of each node.
	let keyval = Array(n).fill(0);
	
	// Boolean Array to hold bool values whether
	// a node is included in MST or not.
	let mstset = Array(n).fill(0);

	// Set all the key values to infinite and
	// none of the nodes is included in MST.
	for(let i = 0; i < n; i++)
	{
		keyval[i] = Number.MAX_VALUE;
		mstset[i] = false;
	}

	// Start to find the MST from node 0.
	// Parent of node 0 is none so set -1.
	// key value or minimum cost to reach
	// 0th node from 0th node is 0.
	parent[0] = -1;
	keyval[0] = 0;

	// Find the rest n-1 nodes of MST.
	for(let i = 0; i < n - 1; i++)
	{
		
		// First find out the minimum node
		// among the nodes which are not yet
		// included in MST.
		let u = minnode(n, keyval, mstset);
	
		// Now the uth node is included in MST.
		mstset[u] = true;
	
		// Update the values of neighbor
		// nodes of u which are not yet
		// included in MST.
		for(let v = 0; v < n; v++)
		{
			if (city[u][v] > 0 &&
				mstset[v] == false &&
				city[u][v] < keyval[v])
			{
				keyval[v] = city[u][v];
				parent[v] = u;
			}
		}
	}

	// Find out the cost by adding
	// the edge values of MST.
	let cost = 0;
	for(let i = 1; i < n; i++)
		cost += city[parent[i]][i];
		
	console.log(cost) ;
}

// driver code

		// Input 1
	let n1 = 5;
	let city1 =	 [[ 0, 1, 2, 3, 4 ],
					[ 1, 0, 5, 0, 7 ],
					[ 2, 5, 0, 6, 0 ],
					[ 3, 0, 6, 0, 0 ],
					[ 4, 7, 0, 0, 0 ]];
						
	findcost(n1, city1);
	
	// Input 2
	let n2 = 6;
	let city2 = [[ 0, 1, 1, 100, 0, 0 ],
					[ 1, 0, 1, 0, 0, 0 ],
					[ 1, 1, 0, 0, 0, 0 ],
					[ 100, 0, 0, 0, 2, 2 ],
					[ 0, 0, 0, 2, 0, 2 ],
					[ 0, 0, 0, 2, 2, 0 ]];
						
	findcost(n2, city2);
	
