/**
 * Copyright (c) 2016-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <UIKit/UIKit.h>

@class IGListAdapter;
@class IGListSectionController;

@protocol IGListSectionType;

NS_ASSUME_NONNULL_BEGIN

/**
 Implement this protocol to receive working range events for a list.

 The working range is a range *near* the viewport in which you can begin preparing content for display. For example,
 you could begin decoding images, or warming text caches.
 */
@protocol IGListWorkingRangeDelegate <NSObject>

/**
 Notifies the delegate that an section controller will enter the working range.

 @param listAdapter       The adapter controlling the list.
 @param sectionController The section controller entering the range.
 */
- (void)listAdapter:(IGListAdapter *)listAdapter sectionControllerWillEnterWorkingRange:(IGListSectionController <IGListSectionType> *)sectionController;

/**
 Notifies the delegate that an section controller exited the working range.

 @param listAdapter       The adapter controlling the list.
 @param sectionController The section controller that exited the range.
 */
- (void)listAdapter:(IGListAdapter *)listAdapter sectionControllerDidExitWorkingRange:(IGListSectionController <IGListSectionType> *)sectionController;

@end

NS_ASSUME_NONNULL_END
