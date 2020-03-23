cur = "11"

ends = {}

s = '"1",\n"11",\n'

num = 2

while len(cur) < 100000:
    if num > 30:
        if not cur[len(cur) - 1000 :] in ends.keys():
            ends[cur[len(cur) - 1000 :]] = []
        ends[cur[len(cur) - 1000 :]].append(num)
    i = 0
    cnt = 1
    nxt = ""
    while i < len(cur):
        while i + 1 < len(cur) and cur[i] == cur[i + 1]:
            i += 1
            cnt += 1
        nxt += str(cnt) + cur[i]
        i += 1
        cnt = 1
    cur = nxt
    s += '"' + cur + '"' + ",\n"
    num += 1

for i in ends:
    print('"' + i + '",')

with open("nums.txt", "w") as f:
    f.write(s)
