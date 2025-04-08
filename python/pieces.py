class Piece:
        def __init__(self, name, perf, len):
            self.name = name
            self.perf = perf
            self.len = len
            self.check()

        def __repr__(self):
            result = "%s by %s (%.2fs)" % (self.name, self.perf, self.len)
            return result

        def check(self):
            assert self.name.__class__ == str
            assert self.perf.__class__ == str
            assert self.len.__class__ == type(1.0)
            l = self.len
            assert 0 < l and l < 36000