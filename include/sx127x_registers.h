#ifndef SX1278_SX127X_REGISTERS_H
#define SX1278_SX127X_REGISTERS_H

// LoRa and some common registers
#define REGFIFO 0x00
#define REGOPMODE 0x01
#define REGFRFMSB 0x06
#define REGFRFMID 0x07
#define REGFRFLSB 0x08
#define REGPACONFIG 0x09
#define REGPARAMP 0x0a
#define REGOCP 0x0b
#define REGLNA 0x0c
#define REGFIFOADDRPTR 0x0d
#define REGFIFOTXBASEADDR 0x0e
#define REGFIFORXBASEADDR 0x0f
#define REGFIFORXCURRENTADDR 0x10
#define REGIRQFLAGSMASK 0x11
#define REGIRQFLAGS 0x12
#define REGRXNBBYTES 0x13
#define REGRXHEADERCNTVALUEMSB 0x14
#define REGRXHEADERCNTVALUELSB 0x15
#define REGRXPACKETCNTVALUEMSB 0x16
#define REGRXPACKETCNTVALUELSB 0x17
#define REGMODEMSTAT 0x18
#define REGPKTSNRVALUE 0x19
#define REGPKTRSSIVALUE 0x1a
#define REGRSSIVALUE 0x1b
#define REGHOPCHANNEL 0x1c
#define REGMODEMCONFIG1 0x1d
#define REGMODEMCONFIG2 0x1e
#define REGSYMBTIMEOUTLSB 0x1f
#define REGPREAMBLEMSB 0x20
#define REGPREAMBLELSB 0x21
#define REGPAYLOADLENGTH 0x22
#define REGMAXPAYLOADLENGTH 0x23
#define REGHOPPERIOD 0x24
#define REGFIFORXBYTEADDR 0x25
#define REGMODEMCONFIG3 0x26
#define REGFEIMSB 0x28
#define REGFEIMID 0x29
#define REGFEILSB 0x2a
#define REGRSSIWIDEBAND 0x2c
#define REGDETECTOPTIMIZE 0x31
#define REGINVERTIQ 0x33
#define REGDETECTIONTHRESHOLD 0x37
#define REGSYNCWORD 0x39
#define REGINVERTIQ2 0x3b

// FSK registers
#define REGBITRATEMSB 0x02
#define REGBITRATELSB 0x03
#define REGFDEVMSB 0x04
#define REGFDEVLSB 0x05
#define REGRXCONFIG 0x0d
#define REGRSSICONFIG 0x0e
#define REGRSSICOLLISION 0x0f
#define REGRSSITHRESH 0x10
#define REGRSSIVALUE_FSK 0x11
#define REGRXBW 0x12
#define REGAFCBW 0x13
#define REGOOKPEAK 0x14
#define REGOOKFIX 0x15
#define REGOOKAVG 0x16
#define REGAFCFEI 0x1a
#define REGAFCMSB 0x1b
#define REGAFCLSB 0x1c
#define REGFEIMSB_FSK 0x1d
#define REGFEILSB_FSK 0x1e
#define REGPREAMBLEDETECT 0x1f
#define REGRXTIMEOUT1 0x20
#define REGRXTIMEOUT2 0x21
#define REGRXTIMEOUT3 0x22
#define REGRXDELAY 0x23
#define REGOSC 0x24
#define REGPREAMBLEMSB_FSK 0x25
#define REGPREAMBLELSB_FSK 0x26
#define REGSYNCCONFIG 0x27
#define REGSYNCVALUE1 0x28
#define REGSYNCVALUE2 0x29
#define REGSYNCVALUE3 0x2a
#define REGSYNCVALUE4 0x2b
#define REGSYNCVALUE5 0x2c
#define REGSYNCVALUE6 0x2d
#define REGSYNCVALUE7 0x2e
#define REGSYNCVALUE8 0x2f
#define REGPACKETCONFIG1 0x30
#define REGPACKETCONFIG2 0x31
#define REGPAYLOADLENGTH_FSK 0x32
#define REGNODEADRS 0x33
#define REGBROADCASTADRS 0x34
#define REGFIFOTHRESH 0x35
#define REGSEQCONFIG1 0x36
#define REGSEQCONFIG2 0x37
#define REGTIMERRESOL 0x38
#define REGTIMER1COEF 0x39
#define REGTIMER2COEF 0x3a
#define REGIMAGECAL 0x3b
#define REGTEMP 0x3c
#define REGLOWBAT 0x3d
#define REGIRQFLAGS1 0x3e
#define REGIRQFLAGS2 0x3f
#define REGDIOMAPPING1 0x40
#define REGDIOMAPPING2 0x41
#define REGVERSION 0x42
#define REGPLLHOP 0x44
#define REGTCXO 0x4b
#define REGPADAC 0x4d
#define REGFORMERTEMP 0x5b
#define REGBITRATEFRAC 0x5d
#define REGAGCREF 0x61
#define REGAGCTHRESH1 0x62
#define REGAGCTHRESH2 0x63
#define REGAGCTHRESH3 0x64

// Band-specific registers
#define REGAGCREFLF 0x61
#define REGAGCTHRESH1LF 0x62
#define REGAGCTHRESH2LF 0x63
#define REGAGCTHRESH3LF 0x64
#define REGPLLLF 0x70

#define REGAGCREFHF 0x61
#define REGAGCTHRESH1HF 0x62
#define REGAGCTHRESH2HF 0x63
#define REGAGCTHRESH3HF 0x64
#define REGPLLHF 0x70

#endif //SX1278_SX127X_REGISTERS_H
