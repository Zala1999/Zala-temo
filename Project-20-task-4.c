#include <stdio.h> 
#include <float.h> 
#include <stdlib.h> 
#include <math.h> 

// A structure to represent a Point in 2D plane 
struct Point 
{ 
	int x, y; 
}; 


int compareX(const void* a, const void* b) 
{ 
	Point *p1 = (Point *)a, *p2 = (Point *)b; 
	return (p1->x - p2->x); 
} 

int compareY(const void* a, const void* b) 
{ 
	Point *p1 = (Point *)a, *p2 = (Point *)b; 
	return (p1->y - p2->y); 
} 

float dist(Point p1, Point p2) 
{ 
	return sqrt( (p1.x - p2.x)*(p1.x - p2.x) + 
				(p1.y - p2.y)*(p1.y - p2.y) 
			); 
} 

 
float bruteForce(Point P[], int n) 
{ 
	float min = FLT_MAX; 
	for (int i = 0; i < n; ++i) 
		for (int j = i+1; j < n; ++j) 
			if (dist(P[i], P[j]) < min) 
				min = dist(P[i], P[j]); 
	return min; 
} 


float min(float x, float y) 
{ 
	return (x < y)? x : y; 
} 

float stripClosest(Point strip[], int size, float d) 
{ 
	float min = d; // Initialize the minimum distance as d

	qsort(strip, size, sizeof(Point), compareY); 

	
	for (int i = 0; i < size; ++i) 
		for (int j = i+1; j < size && (strip[j].y - strip[i].y) < min; ++j) 
			if (dist(strip[i],strip[j]) < min) 
				min = dist(strip[i], strip[j]); 

	return min; 
} 

float closestUtil(Point P[], int n) 
{ 
	if (n <= 3) 
		return bruteForce(P, n); 

	// Find the middle point 
	int mid = n/2; 
	Point midPoint = P[mid]; 

	// Consider the vertical line passing through the middle point 
	// calculate the smallest distance dl on left of middle point and 
	// dr on right side 
	float dl = closestUtil(P, mid); 
	float dr = closestUtil(P + mid, n-mid); 

	// Find the smaller of two distances 
	float d = min(dl, dr); 

	// to the line passing through the middle point 
	Point strip[n]; 
	int j = 0; 
	for (int i = 0; i < n; i++) 
		if (abs(P[i].x - midPoint.x) < d) 
			strip[j] = P[i], j++; 

	// Find the closest points in strip. Return the minimum of d and closest 
	// distance is strip[] 
	return min(d, stripClosest(strip, j, d) ); 
} 

// The main function that finds the smallest distance 
// This method mainly uses closestUtil() 
float closest(Point P[], int n) 
{ 
	qsort(P, n, sizeof(Point), compareX); 

	// Use recursive function closestUtil() to find the smallest distance 
	return closestUtil(P, n); 
} 

int main() 
{ 
	Point P[] = {{2, 3}, {12, 30}, {40, 50}, {5, 1}, {12, 10}, {3, 4}}; 
	int n = sizeof(P) / sizeof(P[0]); 
	printf("The smallest distance is %f ", closest(P, n)); 
	return 0; 
}

