# Bicoloring – Concept

## What the problem means

We need to check if it’s possible to color all the nodes of a graph using **only two colors** so that **no two connected nodes share the same color**. If this is possible, the graph is called **bicolorable** (or **bipartite**).

## How to think about it

Imagine painting a map with two colors. Whenever two regions touch (i.e., nodes are connected), they must have different colors. If at any point two connected nodes need to be the same color, then the graph **cannot** be bicolored.

## How to solve it

1. **Pick a starting node** (usually node 0).
2. **Assign it a color**, say 0.
3. **Use BFS or DFS** to visit its neighbors:

   * If a neighbor isn’t colored yet, give it the **opposite color** (1 – current color).
   * If a neighbor already has the **same color**, stop — it’s **not bicolorable**.
4. Continue until all nodes are visited.

## Key idea

* Graphs with **even cycles** can be bicolored.
* Graphs with **odd cycles** cannot.
* BFS helps check this efficiently by coloring level by level.

## In one line

> A graph is **bicolorable** if you can color it with two colors so that every edge connects nodes of different colors.
