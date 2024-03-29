class OrderedStream:

    def __init__(self, n: int):
        self.stream = [""] * n
        self.ptr = 0

    def insert(self, idKey: int, value: str) -> List[str]:
        r = []
        self.stream[idKey-1] = value
        while self.ptr < len(self.stream) and self.stream[self.ptr]:
            r.append(self.stream[self.ptr])
            self.ptr += 1
        return r


# Your OrderedStream object will be instantiated and called as such:
# obj = OrderedStream(n)
# param_1 = obj.insert(idKey,value)