/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCLOCALTIME_H
#define IFC2X3_IFCLOCALTIME_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCoordinatedUniversalTimeOffset;

    /**
     */
    class IFC2X3_DLL_DEF IfcLocalTime : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'HourComponent'.
         * 
         */
        virtual IfcHourInDay getHourComponent();
        /**
         * (const) Returns the value of the explicit attribute 'HourComponent'.
         * 
         * @return the value of the explicit attribute 'HourComponent'
         */
        virtual const IfcHourInDay getHourComponent() const;
        /**
         * Sets the value of the explicit attribute 'HourComponent'.
         * 
         * @param value
         */
        virtual void setHourComponent(IfcHourInDay value);
        /**
         * Gets the value of the explicit attribute 'MinuteComponent'.
         * 
         */
        virtual IfcMinuteInHour getMinuteComponent();
        /**
         * (const) Returns the value of the explicit attribute 'MinuteComponent'.
         * 
         * @return the value of the explicit attribute 'MinuteComponent'
         */
        virtual const IfcMinuteInHour getMinuteComponent() const;
        /**
         * Sets the value of the explicit attribute 'MinuteComponent'.
         * 
         * @param value
         */
        virtual void setMinuteComponent(IfcMinuteInHour value);
        /**
         * Gets the value of the explicit attribute 'SecondComponent'.
         * 
         */
        virtual IfcSecondInMinute getSecondComponent();
        /**
         * (const) Returns the value of the explicit attribute 'SecondComponent'.
         * 
         * @return the value of the explicit attribute 'SecondComponent'
         */
        virtual const IfcSecondInMinute getSecondComponent() const;
        /**
         * Sets the value of the explicit attribute 'SecondComponent'.
         * 
         * @param value
         */
        virtual void setSecondComponent(IfcSecondInMinute value);
        /**
         * Gets the value of the explicit attribute 'Zone'.
         * 
         */
        virtual IfcCoordinatedUniversalTimeOffset *getZone();
        /**
         * (const) Returns the value of the explicit attribute 'Zone'.
         * 
         * @return the value of the explicit attribute 'Zone'
         */
        virtual const IfcCoordinatedUniversalTimeOffset *getZone() const;
        /**
         * Sets the value of the explicit attribute 'Zone'.
         * 
         * @param value
         */
        virtual void setZone(const Step::RefPtr< IfcCoordinatedUniversalTimeOffset > &value);
        /**
         * Gets the value of the explicit attribute 'DaylightSavingOffset'.
         * 
         */
        virtual IfcDaylightSavingHour getDaylightSavingOffset();
        /**
         * (const) Returns the value of the explicit attribute 'DaylightSavingOffset'.
         * 
         * @return the value of the explicit attribute 'DaylightSavingOffset'
         */
        virtual const IfcDaylightSavingHour getDaylightSavingOffset() const;
        /**
         * Sets the value of the explicit attribute 'DaylightSavingOffset'.
         * 
         * @param value
         */
        virtual void setDaylightSavingOffset(IfcDaylightSavingHour value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcLocalTime(Step::Id id, Step::SPFData *args);
        virtual ~IfcLocalTime();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLocalTime &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Integer m_hourComponent;
        /**
         */
        Step::Integer m_minuteComponent;
        /**
         */
        Step::Real m_secondComponent;
        /**
         */
        Step::RefPtr< IfcCoordinatedUniversalTimeOffset > m_zone;
        /**
         */
        Step::Integer m_daylightSavingOffset;

    };

}

#endif // IFC2X3_IFCLOCALTIME_H
