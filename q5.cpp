#include <iostream>

using namespace std;

int main() {
  const int numPlanets = 8; // Assuming 8 planets
  double distances[numPlanets];
  double totalDistance = 0.0;

  // Prompt user for each planet's distance
  for (int i = 0; i < numPlanets; ++i) {
    cout << "Enter the distance from the Sun for planet " << i + 1 << ": ";
    cin >> distances[i];
    totalDistance += distances[i];
  }

  // Calculate and print the average distance
  double averageDistance = totalDistance / numPlanets;
  cout << "The average distance from the Sun of all planets is: "
       << averageDistance << " astronomical units (AU)" << endl;

  return 0;
}
