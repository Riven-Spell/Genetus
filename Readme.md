#Genetus

Genetus is a open-source library designed to act as a basis for Genetic Algorithms. So long as you can provide randomization and scoring, Genetus does the rest for you.

Genetus follows a general format for genetic algorithms.
1. A fully random population of size X is generated.
2. The top Y members of this population are used to create Z "offspring" (slight alterations). X-Z remaining fully random members are created to fill the second population. The top Y members are included in this population, in case evolution goes backwards.
3. The cycle of step 2 repeats A times with the populations produced from the last iteration of step 2. The best B overall results are handed off. 