/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIWatchListCardsManager : NSObject {
    bool  _isInUpNext;
    WLKCanonicalPlayablesResponse * _response;
    NSHashTable * _rowModels;
    NSString * _watchListIdentifier;
    SearchUIWatchListUtilities * _watchListUtility;
}

@property bool isInUpNext;
@property (retain) WLKCanonicalPlayablesResponse *response;
@property (retain) NSHashTable *rowModels;
@property (retain) NSString *watchListIdentifier;
@property (retain) SearchUIWatchListUtilities *watchListUtility;

+ (bool)isUpNextCardSection:(id)arg1;

- (void).cxx_destruct;
- (void)addWatchListRowModelObserver:(id)arg1;
- (long long)currentUpNextButtonState;
- (id)currentUpNextTextForRowModel:(id)arg1;
- (id)initWithWatchListIdentifier:(id)arg1;
- (bool)isInUpNext;
- (bool)isTappable;
- (id)response;
- (id)rowModels;
- (void)setIsInUpNext:(bool)arg1;
- (void)setResponse:(id)arg1;
- (void)setRowModels:(id)arg1;
- (void)setWatchListIdentifier:(id)arg1;
- (void)setWatchListUtility:(id)arg1;
- (void)toggleUpNextWithDelegate:(id)arg1;
- (id)watchListIdentifier;
- (id)watchListUtility;

@end
