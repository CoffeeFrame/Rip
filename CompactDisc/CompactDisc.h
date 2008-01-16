/*
 *  Copyright (C) 2005 - 2007 Stephen F. Booth <me@sbooth.org>
 *  All Rights Reserved
 */

#import <Cocoa/Cocoa.h>

#include <DiskArbitration/DiskArbitration.h>
#include <IOKit/storage/IOCDTypes.h>

@class SessionDescriptor, TrackDescriptor, AlbumMetadata, SectorRange;

// ========================================
// This class simplifies access to a CDDA disc
// ========================================
@interface CompactDisc : NSManagedObject
{
}

// ========================================
// Creation
+ (id) compactDiscWithDADiskRef:(DADiskRef)disk;
+ (id) compactDiscWithCDTOC:(CDTOC *)toc;

// ========================================
// Core Data properties
@property (assign) NSNumber * discID;

// ========================================
// Core Data relationships
@property (assign) AlbumMetadata * metadata;
@property (assign) NSSet * sessions;

// ========================================
// Other properties
@property (readonly) NSArray * orderedSessions;
@property (readonly) SessionDescriptor * firstSession;
@property (readonly) SessionDescriptor * lastSession;

@property (readonly) NSString * musicBrainzDiscID;

// ========================================

- (SessionDescriptor *) sessionNumber:(NSUInteger)number;
- (TrackDescriptor *) trackNumber:(NSUInteger)number;

@end

@interface CompactDisc (CoreDataGeneratedAccessors)
- (void) addSessionsObject:(SessionDescriptor *)value;
- (void) removeSessionsObject:(SessionDescriptor *)value;
- (void) addSessions:(NSSet *)value;
- (void) removeSessions:(NSSet *)value;
@end
