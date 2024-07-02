// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZVehicleSpawnComponent;
class USBZVehicleSplineFollowingComponent;
#ifdef STARBREEZE_SBZVehicleInterface_generated_h
#error "SBZVehicleInterface.generated.h already included, missing '#pragma once' in SBZVehicleInterface.h"
#endif
#define STARBREEZE_SBZVehicleInterface_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSpawnComponent); \
	DECLARE_FUNCTION(execGetSplineFollowingComponent);


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSpawnComponent); \
	DECLARE_FUNCTION(execGetSplineFollowingComponent);


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZVehicleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZVehicleInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVehicleInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVehicleInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVehicleInterface(USBZVehicleInterface&&); \
	NO_API USBZVehicleInterface(const USBZVehicleInterface&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZVehicleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVehicleInterface(USBZVehicleInterface&&); \
	NO_API USBZVehicleInterface(const USBZVehicleInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVehicleInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVehicleInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZVehicleInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSBZVehicleInterface(); \
	friend struct Z_Construct_UClass_USBZVehicleInterface_Statics; \
public: \
	DECLARE_CLASS(USBZVehicleInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVehicleInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_11_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_11_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISBZVehicleInterface() {} \
public: \
	typedef USBZVehicleInterface UClassType; \
	typedef ISBZVehicleInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~ISBZVehicleInterface() {} \
public: \
	typedef USBZVehicleInterface UClassType; \
	typedef ISBZVehicleInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZVehicleInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZVehicleInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
