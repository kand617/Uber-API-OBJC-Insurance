//
//  PriceEsitmate.h
//  UberAPI
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ) on 12/13/2016
//
#ifndef APIMATIC_PRICEESITMATE
#define APIMATIC_PRICEESITMATE

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "APIHelper.h"



//protocol defined for deserialization of JSON
@protocol PriceEsitmate
@end

@interface PriceEsitmate : JSONModel

/**
* ISO 4217 currency code.
*/
@property NSString* currencyCode;

/**
* Display name of product.
*/
@property NSString* displayName;

/**
* Expected activity distance (in miles).
*/
@property double distance;

/**
* Expected activity duration (in seconds). Always show duration in minutes.
*/
@property int duration;

/**
* Formatted string of estimate in local currency of the start location. Estimate could be a range, a single number (flat rate) or "Metered" for TAXI.
*/
@property NSString* estimate;

/**
* Upper bound of the estimated price.
*/
@property int highEstimate;

/**
* Lower bound of the estimated price.
*/
@property int lowEstimate;

/**
* Unique identifier representing a specific product for a given latitude & longitude. For example, uberX in San Francisco will have a different product_id than uberX in Los Angeles.
*/
@property NSString* productId;

/**
* Expected surge multiplier. Surge is active if surge_multiplier is greater than 1. Price estimate already factors in the surge multiplier.
*/
@property double surgeMultiplier;


/**
* Key mappings for the json serialization and deserialization
*/
+(NSDictionary*) keyMap;

/**
* Key mapper for json serialization and deserialization
*/
+(JSONKeyMapper*) keyMapper;

/**
* Helps avoiding deserialization errors when one or more properties are missing
* @returns	True, indicating that all properties are optional for deserialization
*/
+(BOOL)propertyIsOptional:(NSString*) propertyName;

@end
#endif