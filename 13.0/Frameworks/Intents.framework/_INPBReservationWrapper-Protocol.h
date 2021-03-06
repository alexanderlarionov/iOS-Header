//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBFlightReservation, _INPBLodgingReservation, _INPBRentalCarReservation, _INPBRestaurantReservation, _INPBTicketedEventReservation, _INPBTrainReservation;

@protocol _INPBReservationWrapper <NSObject>
@property(readonly, nonatomic) _Bool hasTrainReservation;
@property(retain, nonatomic) _INPBTrainReservation *trainReservation;
@property(readonly, nonatomic) _Bool hasTicketedEventReservation;
@property(retain, nonatomic) _INPBTicketedEventReservation *ticketedEventReservation;
@property(readonly, nonatomic) _Bool hasRestaurantReservation;
@property(retain, nonatomic) _INPBRestaurantReservation *restaurantReservation;
@property(readonly, nonatomic) _Bool hasRentalCarReservation;
@property(retain, nonatomic) _INPBRentalCarReservation *rentalCarReservation;
@property(readonly, nonatomic) _Bool hasLodgingReservation;
@property(retain, nonatomic) _INPBLodgingReservation *lodgingReservation;
@property(readonly, nonatomic) _Bool hasFlightReservation;
@property(retain, nonatomic) _INPBFlightReservation *flightReservation;
@end

