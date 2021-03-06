/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/DAEAS-Structs.h>
#import <DAEAS/XXUnknownSuperclass.h>

@class NSFileHandle, NSMutableArray, NSString;

@interface ASParseContext : XXUnknownSuperclass {
	NSMutableArray *_dataBuffers;	// 4 = 0x4
	unsigned _offsetIntoFirstData;	// 8 = 0x8
	long long _curOffset;	// 12 = 0xc
	int _codePage;	// 20 = 0x14
	NSString *_parseErrorReason;	// 24 = 0x18
	BOOL _moreDataExpected;	// 28 = 0x1c
	int _dataGeneration;	// 32 = 0x20
	long long _expectedTotalBytesCount;	// 36 = 0x24
	long long _currentBytesReceivedCount;	// 44 = 0x2c
	unsigned _lastFoundBufferWithoutLineEnding;	// 52 = 0x34
	unsigned _numTokensInBuffersWithoutLineEndings;	// 56 = 0x38
	BOOL _lastLookedAtBufferHadStringEndPrefix;	// 60 = 0x3c
	BOOL _keepPreviousData;	// 61 = 0x3d
	NSMutableArray *_bypassedDataBuffers;	// 64 = 0x40
	NSFileHandle *_logFileHandle;	// 68 = 0x44
	NSString *_logFilePath;	// 72 = 0x48
	int _streamingState;	// 76 = 0x4c
}
@property(readonly, assign) long long currentBytesReceivedCount;	// G=0x51e7d; @synthesize=_currentBytesReceivedCount
@property(assign) long long expectedTotalBytesCount;	// G=0x51e15; S=0x51e49; @synthesize=_expectedTotalBytesCount
@property(assign) int dataGeneration;	// G=0x51df5; S=0x51e05; @synthesize=_dataGeneration
@property(assign) BOOL moreDataExpected;	// G=0x51dd5; S=0x51de5; @synthesize=_moreDataExpected
@property(retain) NSString *parseErrorReason;	// G=0x51d9d; S=0x51db1; @synthesize=_parseErrorReason
@property(assign) int codePage;	// G=0x51d7d; S=0x51d8d; @synthesize=_codePage
@property(readonly, assign) long long curOffset;	// G=0x51d49; @synthesize=_curOffset
@property(assign) BOOL keepPreviousData;	// G=0x51ed1; S=0x51ee1; @synthesize=_keepPreviousData
@property(assign, nonatomic) int streamingState;	// G=0x51eb1; S=0x51ec1; @synthesize=_streamingState
+ (dispatch_queue_s *)_logQueue;	// 0x5056d
// declared property setter: - (void)setKeepPreviousData:(BOOL)data;	// 0x51ee1
// declared property getter: - (BOOL)keepPreviousData;	// 0x51ed1
// declared property setter: - (void)setStreamingState:(int)state;	// 0x51ec1
// declared property getter: - (int)streamingState;	// 0x51eb1
// declared property getter: - (long long)currentBytesReceivedCount;	// 0x51e7d
// declared property setter: - (void)setExpectedTotalBytesCount:(long long)count;	// 0x51e49
// declared property getter: - (long long)expectedTotalBytesCount;	// 0x51e15
// declared property setter: - (void)setDataGeneration:(int)generation;	// 0x51e05
// declared property getter: - (int)dataGeneration;	// 0x51df5
// declared property setter: - (void)setMoreDataExpected:(BOOL)expected;	// 0x51de5
// declared property getter: - (BOOL)moreDataExpected;	// 0x51dd5
// declared property setter: - (void)setParseErrorReason:(id)reason;	// 0x51db1
// declared property getter: - (id)parseErrorReason;	// 0x51d9d
// declared property setter: - (void)setCodePage:(int)page;	// 0x51d8d
// declared property getter: - (int)codePage;	// 0x51d7d
// declared property getter: - (long long)curOffset;	// 0x51d49
- (void)invalidateBuffers;	// 0x51cd9
- (int)numTokensStreamableForNextStringSizeOfTerminator:(int *)terminator;	// 0x51c71
- (int)numTokensForNextOpaqueData;	// 0x51c5d
- (int)_numTokensForNextOpaqueDataCheckNumTokens:(BOOL)nextOpaqueDataCheckNumTokens;	// 0x51b95
- (int)numTokensForNextString;	// 0x51b25
- (unsigned char)nextByte;	// 0x51b0d
- (unsigned char)byteAtOffsetFromCurrentByte:(unsigned)currentByte;	// 0x51a09
- (unsigned char)currentByte;	// 0x51879
- (void)addData:(id)data;	// 0x5179d
- (void)_logBlobChunk:(id)chunk;	// 0x51659
- (void)resetToZeroOffset;	// 0x51539
- (BOOL)advanceOffsetByAmount:(unsigned)amount;	// 0x51521
- (BOOL)advanceOffsetByAmount:(unsigned)amount retainLastToken:(BOOL)token;	// 0x51381
- (char *)bufferForLength:(unsigned)length shouldFree:(BOOL *)free;	// 0x5119d
- (id)bufferWithAllData;	// 0x510b5
- (long)goodSizeForBuffer;	// 0x51035
- (int)numberOfBytesUntilStringEnd:(char *)bytesUntilStringEnd searchStringLength:(int)length acceptingBufferBits:(BOOL)bits;	// 0x50cbd
- (BOOL)hasNumberOfTokensRemaining:(unsigned)tokensRemaining;	// 0x50bf9
- (void)dealloc;	// 0x50b45
- (void)_moveLogFileContentsAtPath:(id)path;	// 0x5078d
- (void)setShouldLog:(BOOL)log;	// 0x505e5
- (id)init;	// 0x50599
@end
