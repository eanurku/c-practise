1. Breakdown of scanf("%*[^\n]%*c"):

    %*[^\n] scans everything until a \n, but doesn't scan in the \n. The asterisk(*) tells it to discard whatever was scanned.
    %*c scans a single character, which will be the \n left over by %*[^\n] in this case. The asterisk instructs scanf to discard the scanned character.
2.