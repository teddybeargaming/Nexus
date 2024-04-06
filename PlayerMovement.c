SystemCollections;
Nexus3D;
//Current X,Y,Z values is player's starting point, change if neccesary
x=0 y=0 z=0
player_pos= (x+y+z)
  input.GetKey("w")
  x+1
  input.GetKey("s")
  x-1
  input.GetKey("a")
  y+1
  input.GetKey("d")
  y-1
  input.GetKey("space")
  z+4
  z-4
