def init_port(mode):
    DDRA=mode
    print (f"the number equal  {DDRA}")

mode=0

for i in range(8):
    x=input(f"please enter {i} bit mode  ")
    if x=="in":
         y=0
    else:
        y=1
    mode=mode|(y<<i)
init_port(mode)
    