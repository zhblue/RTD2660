@echo off
copy output\RTD2662.H00 BIN\PT2660.H00
copy output\RTD2662.H01 BIN\PT2660.H01
HEX2BIN /Q /L131072       BIN\PT2660.H00 BIN\PT2660.BIN
HEX2BIN /Q /O65536 /M     BIN\PT2660.H01 BIN\PT2660.BIN