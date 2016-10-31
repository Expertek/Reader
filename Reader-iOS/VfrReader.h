//
//  VfrReader.h
//  VfrReader
//
//	Created by Julius Oklamcak on 2011-09-01.
//	Copyright © 2011-2015 Julius Oklamcak. All rights reserved.
//
//	Permission is hereby granted, free of charge, to any person obtaining a copy
//	of this software and associated documentation files (the "Software"), to deal
//	in the Software without restriction, including without limitation the rights to
//	use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
//	of the Software, and to permit persons to whom the Software is furnished to
//	do so, subject to the following conditions:
//
//	The above copyright notice and this permission notice shall be included in all
//	copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//	OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//	WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
//	CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <QuartzCore/QuartzCore.h>
#import <MessageUI/MessageUI.h>
#import <ImageIO/ImageIO.h>

//! Project version number for Reader-iOS.
FOUNDATION_EXPORT double ReaderVersionNumber;

//! Project version string for Reader-iOS.
FOUNDATION_EXPORT const unsigned char ReaderVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <VfrReader/PublicHeader.h>


#import <VfrReader/ReaderConstants.h>
#import <VfrReader/ReaderDocument.h>
#import <VfrReader/ReaderViewController.h>
#import <VfrReader/ReaderMainToolbar.h>
#import <VfrReader/ReaderMainPagebar.h>
#import <VfrReader/ReaderContentView.h>
#import <VfrReader/ReaderContentPage.h>
#import <VfrReader/ReaderContentTile.h>
#import <VfrReader/ThumbsViewController.h>
#import <VfrReader/ThumbsMainToolbar.h>
#import <VfrReader/CGPDFDocument.h>
#import <VfrReader/ReaderDocumentOutline.h>
#import <VfrReader/ReaderThumbRequest.h>
#import <VfrReader/ReaderThumbCache.h>
#import <VfrReader/ReaderThumbQueue.h>
#import <VfrReader/ReaderThumbFetch.h>
#import <VfrReader/ReaderThumbRender.h>
#import <VfrReader/ReaderThumbsView.h>
#import <VfrReader/ReaderThumbView.h>
#import <VfrReader/UIXToolbarView.h>
