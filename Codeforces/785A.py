ans = 0
dictionary = {"Tetrahedron":4, "Cube":6, "Octahedron":8,
"Dodecahedron":12, "Icosahedron": 20}
for i in range(int(input())):
  a = input()
  ans += dictionary[a]
print(ans)