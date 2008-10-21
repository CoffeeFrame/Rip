/*
 *  Copyright (C) 2008 Stephen F. Booth <me@sbooth.org>
 *  All Rights Reserved
 */

#import <Cocoa/Cocoa.h>

@class BitArray, TrackDescriptor, DriveInformation;

// ========================================
// This class represents a single track extracted from a CDDA disc
// ========================================
@interface TrackExtractionRecord : NSManagedObject
{
}

// ========================================
// Core Data properties
@property (assign) NSNumber * accurateRipChecksum;
@property (assign) NSNumber * accurateRipAlternatePressingChecksum;
@property (assign) NSNumber * accurateRipAlternatePressingOffset;
@property (assign) NSNumber * accurateRipConfidenceLevel;
@property (assign) NSDate * date;
@property (assign) BitArray * errorFlags;
@property (assign) NSString * MD5;
@property (assign) NSString * SHA1;
@property (assign) NSURL * URL;

// ========================================
// Core Data relationships
@property (assign) DriveInformation * drive;
@property (assign) TrackDescriptor * track;

@end