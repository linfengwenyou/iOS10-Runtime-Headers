/* Generated by RuntimeBrowser.
 */

@protocol MUContentViewControllerAKControllerSubdelegate <NSObject>

@required

- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2;
- (CALayer *)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maxPageRectWithPageIndex:(unsigned long long)arg1;
- (NSData *)newContentSnapshotPDFDataIncludingAdornments:(bool)arg1 atScale:(double)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 onOverlayAtPageIndex:(unsigned long long)arg4;
- (bool)shouldDetectFormElements;
- (bool)shouldPlaceFormElementAtPoint:(struct CGPoint { double x1; double x2; })arg1 onOverlayAtPageIndex:(unsigned long long)arg2;
- (bool)shouldPlaceProposedFormElementAtRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onOverlayAtPageIndex:(unsigned long long)arg2;

@optional

- (NSIndexSet *)characterIndexesForQuadPoints:(NSArray *)arg1 onPageAtIndex:(unsigned long long)arg2;
- (void)clearHighlightableSelection;
- (void)didEnterToolMode;
- (void)didExitToolMode;
- (void)didPlaceSingleShotAnnotation:(AKAnnotation *)arg1 onPageModelController:(AKPageModelController *)arg2;
- (bool)hasHighlightableSelection;
- (NSIndexSet *)highlightableSelectionCharacterIndexesOnPageAtIndex:(unsigned long long)arg1;
- (NSArray *)quadPointsForCharacterIndexes:(NSIndexSet *)arg1 onPageAtIndex:(unsigned long long)arg2;
- (void)willPlaceSingleShotAnnotation:(AKAnnotation *)arg1 onProposedPageModelController:(id*)arg2;

@end
