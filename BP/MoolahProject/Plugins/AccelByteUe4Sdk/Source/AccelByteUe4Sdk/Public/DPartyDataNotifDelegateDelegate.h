#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPartyDataNotif.h"
#include "DPartyDataNotifDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyDataNotifDelegate, FAccelByteModelsPartyDataNotif, Response);

