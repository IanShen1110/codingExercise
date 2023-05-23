
import random
from os import urandom
h1 = ["Ic2wan", "小小綠", "shu", "李敬語", "switch", "鍾嘎哭", "九離", "Lilyyyy"]

random.seed(urandom(32))
random.shuffle(h1)

a = random.randint(0, len(h1)-1)
print(f"中獎的是 {h1[a]}、{h1[(a+1)%len(h1)]}")