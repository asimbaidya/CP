# explanation

# Reducing Complexity

- [lc-two-sum](https://leetcode.com/problems/two-sum/)

Better solution exist, one with map, you can record visited entry and at each iteration you just check if $target-value$ is stored in map, if yeas, return index of current iteration & one matched from map. Obviously, need to store index in map, like $mp[value] = index$

Two pointer is also another better approach.
