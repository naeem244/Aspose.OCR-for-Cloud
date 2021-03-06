#import <Foundation/Foundation.h>
#import "ASPObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "ASPPartsInfo.h"
#import "ASPPagesInfo.h"


@protocol ASPOCRResponse
@end

@interface ASPOCRResponse : ASPObject


@property(nonatomic) NSString* text;

@property(nonatomic) ASPPartsInfo* partsInfo;

@property(nonatomic) ASPPagesInfo* pagesInfo;

@property(nonatomic) NSString* code;

@property(nonatomic) NSString* status;

@end
