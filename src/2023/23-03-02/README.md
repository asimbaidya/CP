# explanation

# Reducing Complexity

- [lc-two-sum](https://leetcode.com/problems/two-sum/)

Better solution exist, one with map, you can record visited entry and at each iteration you just check if $target-curr_num$ is stored in map, if yeas, return index of curr_num & one matched from map. Obviously, need to store index in map, like $mp[value] = index$
