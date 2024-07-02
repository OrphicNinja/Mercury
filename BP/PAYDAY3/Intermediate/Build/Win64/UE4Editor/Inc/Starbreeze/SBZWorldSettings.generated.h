// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZWorldSettings_generated_h
#error "SBZWorldSettings.generated.h already included, missing '#pragma once' in SBZWorldSettings.h"
#endif
#define STARBREEZE_SBZWorldSettings_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h_37_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h_37_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZWorldSettings(); \
	friend struct Z_Construct_UClass_ASBZWorldSettings_Statics; \
public: \
	DECLARE_CLASS(ASBZWorldSettings, AWorldSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZWorldSettings)


#define PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h_37_INCLASS \
private: \
	static void StaticRegisterNativesASBZWorldSettings(); \
	friend struct Z_Construct_UClass_ASBZWorldSettings_Statics; \
public: \
	DECLARE_CLASS(ASBZWorldSettings, AWorldSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZWorldSettings)


#define PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZWorldSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZWorldSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZWorldSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZWorldSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZWorldSettings(ASBZWorldSettings&&); \
	NO_API ASBZWorldSettings(const ASBZWorldSettings&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZWorldSettings(ASBZWorldSettings&&); \
	NO_API ASBZWorldSettings(const ASBZWorldSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZWorldSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZWorldSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZWorldSettings)


#define PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h_37_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CoverRoomConnection() { return STRUCT_OFFSET(ASBZWorldSettings, CoverRoomConnection); } \
	FORCEINLINE static uint32 __PPO__ConnectorGateConnection() { return STRUCT_OFFSET(ASBZWorldSettings, ConnectorGateConnection); } \
	FORCEINLINE static uint32 __PPO__GateConnectorComponentConnection() { return STRUCT_OFFSET(ASBZWorldSettings, GateConnectorComponentConnection); } \
	FORCEINLINE static uint32 __PPO__DespawnRoomConnection() { return STRUCT_OFFSET(ASBZWorldSettings, DespawnRoomConnection); } \
	FORCEINLINE static uint32 __PPO__AgilityNavlinkConnection() { return STRUCT_OFFSET(ASBZWorldSettings, AgilityNavlinkConnection); } \
	FORCEINLINE static uint32 __PPO__ConnectorComponentConnection() { return STRUCT_OFFSET(ASBZWorldSettings, ConnectorComponentConnection); } \
	FORCEINLINE static uint32 __PPO__ConnectorComponentRoomPathConnection() { return STRUCT_OFFSET(ASBZWorldSettings, ConnectorComponentRoomPathConnection); } \
	FORCEINLINE static uint32 __PPO__AcousticPortalConnection() { return STRUCT_OFFSET(ASBZWorldSettings, AcousticPortalConnection); } \
	FORCEINLINE static uint32 __PPO__PortalConnectorConnection() { return STRUCT_OFFSET(ASBZWorldSettings, PortalConnectorConnection); } \
	FORCEINLINE static uint32 __PPO__LifeActionMontages() { return STRUCT_OFFSET(ASBZWorldSettings, LifeActionMontages); } \
	FORCEINLINE static uint32 __PPO__LifeActionComponents() { return STRUCT_OFFSET(ASBZWorldSettings, LifeActionComponents); }


#define PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h_35_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h_37_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h_37_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h_37_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h_37_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h_37_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h_37_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h_37_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZWorldSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZWorldSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
