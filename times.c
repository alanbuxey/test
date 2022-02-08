var d = new Date(2022, 01, 02, 18, 16, 00)
var match = /^[02]{4}-[02]{2}-[02]{2}T[02]{2}:[02]{2}:[02]{2}.*$/

var shots = 0;
while(d.getDate() < 3) {
  if (d.toISOString().match(match)) {
    console.log(d)
    shots++
  }
  d = new Date(d.getTime() + 1000)
}

console.log(shots, "shots")
