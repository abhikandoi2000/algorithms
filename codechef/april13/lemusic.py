"""
	LEMUSIC - Little Elephant and Music
	April Challenge 2013
"""

#testcases
testcases = int(raw_input())
for x in range(testcases):
	songs = []
	#number of songs
	N = int(raw_input())
	for y in range(N):
		row = raw_input()
		band, length = row.split(" ")
		band = int(band)
		length = int(length)
		songs.append( (band, length) )

	#sort according to length of song
	songs = sorted(songs, key=lambda x: x[1])
	max_sweetness = 0
	for song in songs:
		band
		length = song[1]

