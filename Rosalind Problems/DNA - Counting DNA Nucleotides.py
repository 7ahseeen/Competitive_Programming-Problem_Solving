inpFile = open("rosalind_dna.txt", 'r')

seq = inpFile.read()

stlen = len(seq)

A = T = G = C = 0

for i in range (0, stlen):
    if seq[i] == 'A':
        A += 1
    elif seq[i] == 'T':
        T += 1
    elif seq[i] == 'G':
        G += 1
    elif seq[i] == 'C':
        C += 1

print(A, C, G, T)

inpFile.close()