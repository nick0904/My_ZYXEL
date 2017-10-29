//
//  ChunkController.h
//  ZapiWiFiSystemTest
//
//  Created by Egg on 30/04/2017.
//  Copyright © 2017 Zyxel. All rights reserved.
//

#import <Foundation/Foundation.h>

static Byte        const ChunkController_NoChunk              = 0x00;
static Byte        const ChunkController_FirstChunk           = 0x01;
static Byte        const ChunkController_IntermediateChunk    = 0x02;
static Byte        const ChunkController_LastChunk            = 0x03;

@interface ChunkController : NSObject

- (BOOL)sliceIntoChunkWithData:(NSData *)data sizeOfChunk:(NSUInteger)sizeOfChunk;

- (NSData *)chunkData;
- (NSRange)chunkRange;
- (BOOL)next;


@end
