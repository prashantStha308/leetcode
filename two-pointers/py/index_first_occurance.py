def strStr(haystack: str, needle: str) -> int:
	i = 0
	j = 0
	fo = -1

	def match():
		nonlocal i, j, fo
		if(j == 0):
			fo = i
		i += 1
		j += 1

	def reset():
		nonlocal i, j, fo
		if(fo != -1):
			i = fo + 1
		else:
			i += 1
		j = 0
		fo = -1

	while(i < len(haystack)):
		if(haystack[i] == needle[j]):
			match()

			if(j == len(needle)):
				return fo
		else:
			reset()

	return -1

testCases = [
    { "haystack": "mississippi", "needle": "issip" },
    { "haystack": "sadbutsad", "needle": "sad" },
    { "haystack": "leetcode", "needle": "leeto" }
]

for case in testCases:
    print(f"case: haystack: {case['haystack']}, needle: {case['needle']}")
    print(f"First Occurrence: {strStr(case['haystack'], case['needle'])}")