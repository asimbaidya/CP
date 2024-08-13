from random import choice, randint


class RandomizedSet:

    def __init__(self):
        self.m = dict()

    def insert(self, val: int) -> bool:
        # maybe O(1)
        if self.m.get(val):
            return False
        self.m[val] = True
        return True

    def remove(self, val: int) -> bool:
        # maybe O(1)
        if self.m.get(val):
            del self.m[val]
            return True

    def getRandom(self) -> int:
        # !! O(n + choice/randint)

        # one
        # random_index = randint(0, len(self.m.keys()) - 1)
        # return list(self.m.keys())[random_index]

        # two
        return choice([val for val in self.m.keys()])


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()
