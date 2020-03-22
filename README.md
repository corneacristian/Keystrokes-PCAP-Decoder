# USB Keystrokes Decoder
Small script to decode intercepted USB Keystrokes
## How to use
Place the intercepted Leftover Data columns extracted from the PCAP packets into the input.txt file.

chmod +x decoder

./decoder

## Compile

g++ decoder.cpp -o decoder
