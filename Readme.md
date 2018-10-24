# Genetus

Genetus is a open-source library designed to act as a basis for Genetic Algorithms. So long as you can provide randomization and scoring, Genetus does the rest for you.

Genetus follows a general format for genetic algorithms.
1. A fully random population of size X is generated.
2. The top Y members of this population are used to create Z "offspring" (slight alterations). X-Z remaining fully random members are created to fill the second population. The top Y members are included in this population, in case evolution goes backwards.
3. The cycle of step 2 repeats A times with the populations produced from the last iteration of step 2. The best B overall results are handed off. 

This process is referred to as _salting_ to me. It retains the most effective of the population and encourages growth.

Once a `Populant` has been implemented, use it to create a `Population`, and hand the `Population` off to a `Rule`. Establish the required portions of a `Rule`, and `Execute` it.

You can view the documentation mind map in the IntelliJ mind map plugin or in the image below.

![Mind Map](https://raw.githubusercontent.com/Virepri/Genetus/master/MindMap.png?token=ANP7Mpv0jTfUO2ndkCgJ9c-wbCMavangks5b2VHZwA%3D%3D)
