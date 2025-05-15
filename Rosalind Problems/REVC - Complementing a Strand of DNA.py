inpFile = open("rosalind_revc.txt", 'r')

seq = inpFile.read()

stlen = len(seq)

seq = list(seq)

compSeq = ""

for i in range (stlen - 1, -1, -1):
    if seq[i] == 'T':
        compSeq += 'A'
    elif seq[i] == 'A':
        compSeq += 'T'
    elif seq[i] == 'G':
        compSeq += 'C'
    elif seq[i] == 'C':
        compSeq += 'G'

print(compSeq)

inpFile.close()